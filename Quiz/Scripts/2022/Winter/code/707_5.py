try:
    
    a,b,c=8,9,7
    def h(a,b=6,c=9):
        print(a,b,c,end="")
    
    h(b=1,c=0,3)
    print(a,b,c)
    
except: print('error')
