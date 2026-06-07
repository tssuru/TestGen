try:
    
    a,b,c=8,7,6
    def g(a,b,c=9):
        print(a,b,c,end="")
    
    g(b=0,c=4,3)
    print(a,b,c)
    
except: print('error')
