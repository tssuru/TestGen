try:
    
    a,b,c=8,7,9
    def f(a,b=6,c=6):
        print(a,b,c,end="")
    
    f(b=4,c=5,3)
    print(a,b,c)
    
except: print('error')
