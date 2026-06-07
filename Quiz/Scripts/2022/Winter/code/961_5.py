try:
    
    a,b,c=8,9,7
    def h(a,b=6,c=9):
        print(a,b,c,end="")
    
    h(3,c=0,b=1)
    print(a,b,c)
    
except: print('error')
