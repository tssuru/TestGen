try:
    
    a,b,c=8,6,9
    def g(a,b=7,c=9):
        print(a,b,c,end="")
    
    g(1,4,c=0)
    print(a,b,c)
    
except: print('error')
