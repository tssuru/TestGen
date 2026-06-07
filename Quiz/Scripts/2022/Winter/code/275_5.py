try:
    
    a,b,c=8,8,6
    def h(a,b=7,c=9):
        print(a,b,c,end="")
    
    h(c=4,a=5,b=3)
    print(a,b,c)
    
except: print('error')
