try:
    a,b,c=9,7,8
    def f(a,b=8,c):
        print(a,b,c,end=" ")
    
    f(0,3,a=4)
    print(a,b,c)
    
except: print('error')
