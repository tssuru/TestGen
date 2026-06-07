try:
    
    a,b,c=7,6,8
    def h(a,b=9,c=8):
        print(a,b,c,end="")
    
    h(1,5,5)
    print(a,b,c)
    
except: print('error')
