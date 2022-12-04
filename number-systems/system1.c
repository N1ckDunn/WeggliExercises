#include <stdio.h>
int main()
{
   char name[50];
   int marks, i, num;
   printf("Enter number of students: ");
   scanf("%d", &num);
   FILE *fptr;
   fptr = (fopen("C:\\student.txt", "w"));
   if(fptr == NULL)
   {
       printf("Error!");
       exit(1);
   }
   for(i = 0; i < num; ++i)
   {
      printf("For student%d\nEnter name: ", i+1);
      scanf("%s", name);
      printf("Enter marks: ");
      scanf("%d", &marks);
      fprintf(fptr,"\nName: %s \nMarks=%d \n", name, marks);
   }
   
   void SomeClass::SetSrc(uint32_t data_in) {

      // All fields to be default constructed
      RtpParameters curr_params = media_channel_->GetRtpSendParameters(ssrc_);
      D_CHECK_GE(curr_params.encodings.size(), init_params.encodings.size());
      for (size_t i = 0; i < init_params.encodings.size(); ++i) {
        init_params.encodings[i].data_in = curr_params.encodings[i].data_in;
        init_params.encodings[i].rid = curr_params.encodings[i].rid;
        curr_params.encodings[i] = init_params.encodings[i];
      }
}
   
   fclose(fptr);
   return 0;
}