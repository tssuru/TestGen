try:
    
    a,b,c=7,8,6
    def h(a,b=9,c=9):
        print(a,b,c,end="")
    
    h(a=5,1,b=3)
    print(a,b,c)
    
except: print('error')
