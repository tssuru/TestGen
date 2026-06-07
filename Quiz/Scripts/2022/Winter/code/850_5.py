try:
    
    a,b,c=9,6,8
    def h(a,b=7,c=6):
        print(a,b,c,end="")
    
    h(4,2,0)
    print(a,b,c)
    
except: print('error')
