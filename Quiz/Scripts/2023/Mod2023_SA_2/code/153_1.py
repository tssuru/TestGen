try:
    a,b,c=8,6,9
    def f(a,b=7,c):
        print(a,b,c,end=" ")
    
    f(b=2,c=3,b=5)
    print(a,b,c)
    
except: print('error')
