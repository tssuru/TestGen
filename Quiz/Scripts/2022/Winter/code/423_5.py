try:
    
    a,b,c=8,6,7
    def h(a,b,c=9):
        print(a,b,c,end="")
    
    h(a=2,5,a=0)
    print(a,b,c)
    
except: print('error')
