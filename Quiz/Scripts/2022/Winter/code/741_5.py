try:
    
    a,b,c=8,7,6
    def g(a,b=9,c=9):
        print(a,b,c,end="")
    
    g(b=4,c=1,0)
    print(a,b,c)
    
except: print('error')
