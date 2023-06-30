namespace BTH5 {
    interface INews {
        string Id { get; set; }
        string Title { get; set; }
        string Author { get; set; }

        void Display();
    }
    
    class News: INews {
        private string? id, title, author, content;
        private DateTime publicDate = DateTime.Now;
        private List<float> avgRate = new List<float>();

        public string Id { get => id; set => id = value; }
        public string Title { get => title; set => title = value; }
        public string Author { get => author; set => author = value; }
        public string Content { get => content; set => content = value; }
        public DateTime PublicDate { get => publicDate; set => publicDate = value; }
        public List<float> AvgRate { get => avgRate; set => avgRate = value; }

        public News() {
            id = title = author = content = "";
            publicDate = DateTime.Now;
            avgRate.Add(10);
        }

        public News(string id, string title, string author, string content, DateTime publicDate, List<float> avgRate) {
            this.id = id;
            this.title = title;
            this.author = author;
            this.content = content;
            this.publicDate = publicDate;
            this.avgRate = avgRate;
        }

        public void Display() {
            Console.WriteLine($"ID: {id}, Title: {title}, Author: {author}");
            Console.WriteLine($"Content: {content}");
            Console.WriteLine($"Ngày đăng: {publicDate.ToShortDateString()}");
            Console.Write("Điểm đánh giá: ");
            foreach (float d in avgRate) {
                Console.Write(String.Format("{0:f2} ", d));
            }
            Console.WriteLine();
        }

        public float Cal_Avg() => avgRate.Average();
    }

    class ListNews {
        private int n;
        private List<News> ls;

        public ListNews() {
            n = 0;
            ls = new List<News>(n);
        }

        public ListNews(int n, List<News> ls) {
            this.n = n;
            this.ls = ls;
        }

        public void Input() {
            Console.Write("Nhập số lượng tin tức: ");
            n = Convert.ToInt32(Console.ReadLine());
            ls = new List<News>(n);

            for (int i = 1; i <= ls.Count; i++) {
                Console.WriteLine("Nhập tin tức thứ {0}", i);
                Console.Write("Id: ");
                string? id = Console.ReadLine();

                Console.Write("Title: ");
                string? title = Console.ReadLine();

                Console.Write("Author: ");
                string? author = Console.ReadLine();

                Console.Write("Contnet: ");
                string? content = Console.ReadLine();

                Console.Write("PublicDate: ");
                DateTime publicDate = Convert.ToDateTime(Console.ReadLine());
                
                Console.Write("Só lượng người đánh giá: ");
                int nguoi = Convert.ToInt32(Console.ReadLine());

                List<float> avgRate = new List<float>(nguoi);
                for (int j = 1; j <= nguoi; j++) {
                    Console.Write("Đánh giá của người thứ {0}: ", j);
                    float x = Convert.ToSingle(Console.ReadLine());
                    avgRate.Add(x);
                }
                ls.Add(new News(id, title, author, content, publicDate, avgRate));
            }
        }

        public void Output() {
            for (int i = 0; i < ls.Count; i++) {
                Console.WriteLine("News {0}:", i+1);
                ls[i].Display();
            }
            Console.WriteLine();
        }

        public void Insert_News() {
            News n = new News();
            Console.Write("Id: ");
            string? id = Console.ReadLine();

            Console.Write("Title: ");
            string? title = Console.ReadLine();

            Console.Write("Author: ");
            string? author = Console.ReadLine();

            Console.Write("Contnet: ");
            string? content = Console.ReadLine();

            Console.Write("PublicDate: ");
            DateTime publicDate = Convert.ToDateTime(Console.ReadLine());
            
            Console.Write("Só lượng người đánh giá: ");
            int nguoi = Convert.ToInt32(Console.ReadLine());

            List<float> avgRate = new List<float>(nguoi);
            for (int j = 1; j <= nguoi; j++) {
                Console.Write("Đánh giá của người thứ {0}: ", j);
                float x = Convert.ToSingle(Console.ReadLine());
                avgRate.Add(x);
            }
            ls.Add(new News(id, title, author, content, publicDate, avgRate));
        }
    
        public void AverageRate() {
            for (int i = 0; i < ls.Count; i++) {
                Console.WriteLine("New {0}:", i+1);
                Console.WriteLine($"ID: {ls[i].Id}, Title: {ls[i].Title}, Author: {ls[i].Author}");
                Console.WriteLine($"Content: {ls[i].Content}");
                Console.WriteLine($"PublicDate: {ls[i].PublicDate.ToShortDateString()}");
                Console.Write(String.Format("AvgRate: {0:f2}", ls[i].Cal_Avg()));
                Console.WriteLine();
            }
        }
    }
}
