try:
    
    a,b,c=6,8,9
    def h(a,b=7,c=8):
        print(a,b,c,end="")
    
    h(1,5)
    print(a,b,c)
    
except: print('error')
