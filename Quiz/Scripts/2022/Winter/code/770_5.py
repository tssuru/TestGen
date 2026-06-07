try:
    
    a,b,c=8,7,6
    def g(a,b=9,c=6):
        print(a,b,c,end="")
    
    g(c=1,a=0,b=4)
    print(a,b,c)
    
except: print('error')
