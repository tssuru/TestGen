try:
    
    a,b,c=6,6,8
    def h(a,b=7,c=9):
        print(a,b,c,end="")
    
    h(a=0,5,c=4)
    print(a,b,c)
    
except: print('error')
