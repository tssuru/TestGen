try:
    
    a,b,c=7,9,6
    def g(a,b=8,c=9):
        print(a,b,c,end="")
    
    g(a=3,5,b=4)
    print(a,b,c)
    
except: print('error')
