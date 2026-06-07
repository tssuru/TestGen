try:
    
    a,b,c=7,7,6
    def h(a,b=8,c=9):
        print(a,b,c,end="")
    
    h(3,2,0)
    print(a,b,c)
    
except: print('error')
