try:
    
    a,b,c=8,7,9
    def h(a,b=6,c=9):
        print(a,b,c,end="")
    
    h(c=2,b=0,a=4)
    print(a,b,c)
    
except: print('error')
