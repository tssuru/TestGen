try:
    a,b,c=6,6,8
    def f(a,b,c=9):
        print(a,b,c,end=" ")
    
    f(a=4,0,a=2)
    print(a,b,c)
    
except: print('error')
