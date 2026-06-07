try:
    
    a,b,c=6,7,8
    def h(a,b=6,c=9):
        print(a,b,c,end="")
    
    h(4,c=1,b=3)
    print(a,b,c)
    
except: print('error')
