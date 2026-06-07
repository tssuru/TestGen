try:
    a,b,c=9,8,7
    def f(a,b,c=6):
        print(a,b,c,end=" ")
    
    f(4,a=2)
    print(a,b,c)
    
except: print('error')
