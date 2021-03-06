/*#include <windows.h>
#ifdef WIN32
typedef HANDLE ThreadType;
#else
typedef pthread_t ThreadType;
#endif

class Thread 
{
public:
  Thread() {}
  virtual ~Thread();

  // ������� ������� ������. �� ������ ���������� � �������������
  // ������, ��� ��� ����� ���������, ��� ����� ���������� �� ����,
  // ��� ������ ����� ��������� �����������. � ��� ����� �������� 
  // ���������, ���� ������� pthread_create ��� CreateThread �
  // � ������������. � ����� ����������� ������� � ������������, 
  // �� ��� � � ������������ ������������������� �������, 
  // � ������ ������ �������� � ��������� ������ ������ ����� 
  // ����������� �������, ���� � ������ ������ ������� ��������� 
  // � ���������� ������ ������. ������ �� ������ ����� ������
  // ������������ ��������� �� ���� �������. 
  void Start();

  // ������� ������� ������, ����������� ������ ������.
  // ����� �����������, ����� ��� ������� ����������� ������.
  // ������ ������������� ������ ��� ���������� � ������ �������
  // ����� try-catch(...). ������������� ���������� ����� 
  // ���������� �������� � ����������� ������� ��������� ���
  // ����������� ��������� �������.
  virtual void Execute() = 0;

  // ������������� � ������.
  // ������ ������� ������ ���������� ������ ����� �����
  // �������� ������. ����������� ��� ������������� �������,
  // ���� ���� ��������� ���������� ������.
  void Join();

  // ����������� ������.
  // ������������� ���������� ����� �����. ������ ������
  // ���������� ������ �������� ������ ���������������.
  // ���������� ��������� ����� ���������, ������������
  // � ������� Execute() ������� ��� ������, ��� �����
  // ��������� ������ ���������� ����������.
  void Kill();

private:
  ThreadType __handle;

  // ������ �� ���������� ����������� ������� � C++
  Thread(const Thread&);
  void operator=(const Thread&);
};// ext
*/