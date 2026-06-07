try:
    
    a,b,c=7,7,8
    def h(a,b=6,c=9):
        print(a,b,c,end="")
    
    h(5,c=1)
    print(a,b,c)
    
except: print('error')
