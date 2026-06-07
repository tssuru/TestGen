try:
    
    a,b,c=6,7,6
    def h(a,b=8,c=9):
        print(a,b,c,end="")
    
    h(2,5,0)
    print(a,b,c)
    
except: print('error')
