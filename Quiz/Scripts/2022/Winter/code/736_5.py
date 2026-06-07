try:
    
    a,b,c=8,6,7
    def h(a,b,c=9):
        print(a,b,c,end="")
    
    h(2,c=4,b=2)
    print(a,b,c)
    
except: print('error')
