try:
    a,b,c=8,6,7
    def g(a,b,c=9):
        print(a,b,c,end=" ")
    
    g(b=2,c=4,5)
    print(a,b,c)
    
except: print('error')
