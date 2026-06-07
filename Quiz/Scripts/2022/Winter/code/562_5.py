try:
    
    a,b,c=8,9,6
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(b=5,a=4,c=2)
    print(a,b,c)
    
except: print('error')
