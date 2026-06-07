try:
    
    a,b,c=6,9,8
    def h(a,b=7,c=6):
        print(a,b,c,end="")
    
    h(a=4,0,a=3)
    print(a,b,c)
    
except: print('error')
