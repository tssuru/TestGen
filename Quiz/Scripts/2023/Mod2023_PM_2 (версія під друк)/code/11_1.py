try:
    a,b,c=8,6,9
    def g(a,b=7,c=8):
        print(a,b,c,end=" ")
    
    g(b=2,c=3,2)
    print(a,b,c)
    
except: print('error')
