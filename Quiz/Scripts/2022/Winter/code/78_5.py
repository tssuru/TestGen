try:
    
    a,b,c=8,9,6
    def g(a,b,c=6):
        print(a,b,c,end="")
    
    g(0,4,2)
    print(a,b,c)
    
except: print('error')
