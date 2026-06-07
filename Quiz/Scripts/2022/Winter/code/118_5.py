try:
    
    a,b,c=6,7,8
    def h(a,b=6,c):
        print(a,b,c,end="")
    
    h(2,5,2)
    print(a,b,c)
    
except: print('error')
