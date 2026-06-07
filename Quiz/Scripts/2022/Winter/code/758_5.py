try:
    
    a,b,c=7,8,6
    def h(a,b,c=9):
        print(a,b,c,end="")
    
    h(a=1,4,a=3)
    print(a,b,c)
    
except: print('error')
