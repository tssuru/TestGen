try:
    
    a,b,c=8,9,6
    def g(a,b,c=7):
        print(a,b,c,end="")
    
    g(b=4,c=5,3)
    print(a,b,c)
    
except: print('error')
