try:
    a,b,c=8,6,7
    def g(a,b,c=8):
        print(a,b,c,end=" ")
    
    g(5,a=3)
    print(a,b,c)
    
except: print('error')
