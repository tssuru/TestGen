try:
    
    a,b,c=8,7,6
    def h(a,b,c=9):
        print(a,b,c,end="")
    
    h(b=4,c=3,0)
    print(a,b,c)
    
except: print('error')
