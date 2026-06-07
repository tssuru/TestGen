try:
    
    a,b,c=8,9,6
    def f(a,b=7,c):
        print(a,b,c,end="")
    
    f(b=1,c=0,5)
    print(a,b,c)
    
except: print('error')
