try:
    
    a,b,c=8,9,6
    def g(a,b=7,c=6):
        print(a,b,c,end="")
    
    g(4,c=0)
    print(a,b,c)
    
except: print('error')
