try:
    a,b,c=9,7,6
    def g(a,b=8,c=8):
        print(a,b,c,end=" ")
    
    g(1,c=2,b=5)
    print(a,b,c)
    
except: print('error')
