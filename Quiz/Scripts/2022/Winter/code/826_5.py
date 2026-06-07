try:
    
    a,b,c=9,7,8
    def h(a,b=6,c=9):
        print(a,b,c,end="")
    
    h(2,1,b=5)
    print(a,b,c)
    
except: print('error')
