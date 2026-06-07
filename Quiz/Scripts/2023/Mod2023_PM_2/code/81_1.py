try:
    a,b,c=7,9,6
    def g(a,b,c=9):
        print(a,b,c,end=" ")
    
    g(b=5,c=2,3)
    print(a,b,c)
    
except: print('error')
