<?php
    $server = "ADMIN\SQLEXPRESS";
    // $username = "your_username"; // Thay your_username bằng username của bạn
    // $password = "your_password"; // Thay your_password bằng password của bạn
    $database = "test";

    // $conn = new mysqli($server, $username, $password, $database);
    $conn = new mysqli($server, $database);

    if($conn->connect_error) {
        die("Connection failed: " . $conn->connect_error);
    }

    $sql = "SELECT cmt as CCCD, ten as 'Họ và tên', tuoi as Tuổi FROM Nguoi";
    $result = $conn->query($sql);

    $data = array();

    if($result->num_rows > 0) {
        while($row = $result->fetch_assoc()) {
            $data[] = $row;
        }
    }

    echo json_encode($data);

    $conn->close();
?>
