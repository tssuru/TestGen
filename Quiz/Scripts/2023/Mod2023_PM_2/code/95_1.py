try:
    a,b,c=7,8,6
    def f(a,b=9,c=7):
        print(a,b,c,end=" ")
    
    f(1,0,a=5)
    print(a,b,c)
    
except: print('error')
