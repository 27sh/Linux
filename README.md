# cat.c

만약 명령줄 인수가 없다면 표준 입력을 사용합니다.

그렇지 않다면 fopen(argv[1], "r"); 를 통해 read 전용의 파일을 엽니다.

while문을 통해 EOF(end of file)까지 문자를 읽고 화면에 출력합니다.

![이미지](https://blogfiles.pstatic.net/MjAyMzA2MDVfMTQy/MDAxNjg1OTczNjQ0NDI4.w0srjSKzYVpOhC0TV2eOFbyyX9hD7p-NQSnjHw-xeWYg.s652GpQ4lO-UkK81sTQiTYYASj7j49RrYSG9z-YRh_og.PNG.saehee0427/image.png)

# copy.c

cp과 동일 역할을 하는 명령어입니다.

받은 인자가 3개가 아닐 경우, copy를 사용하는 법을 출력합니다.

복사 할 파일이 없는 경우, error 메세지를 출력합니다.

정상적인 명령이 입력되면 복사할 파일(fp1)를 끝까지 읽어 fp2에 옮겨 적습니다.

아래 이미지에서 a.txt 가 복사된 것을 확인할 수 있습니다.

![이미지](https://blogfiles.pstatic.net/MjAyMzA2MDZfMTQw/MDAxNjg1OTc3NDIxNDE2._N467Gc5XNJRE6EydVh5wFVr35Zf8iaAtAyosCYzIe8g.YgFoSn-O_8J9KPP_Mo_Louitn-boP9xOdZ_BpPK5nbwg.PNG.saehee0427/image.png)
