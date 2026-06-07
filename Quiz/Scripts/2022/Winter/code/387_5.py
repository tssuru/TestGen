try:
    
    a,b,c=7,9,6
    def g(a,b=6,c):
        print(a,b,c,end="")
    
    g(a=2,b=4,c=3)
    print(a,b,c)
    
except: print('error')
