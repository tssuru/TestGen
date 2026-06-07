try:
    
    a,b,c=9,7,6
    def f(a,b=8,c=6):
        print(a,b,c,end="")
    
    f(a=3,2,b=5)
    print(a,b,c)
    
except: print('error')
