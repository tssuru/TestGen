try:
    
    a,b,c=7,9,8
    def h(a,b,c=6):
        print(a,b,c,end="")
    
    h(1,a=2)
    print(a,b,c)
    
except: print('error')
