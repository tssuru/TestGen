try:
    a,b,c=9,8,6
    def f(a,b,c):
        print(a,b,c,end=" ")
    
    f(b=5,a=3,b=4)
    print(a,b,c)
    
except: print('error')
