try:
    
    a,b,c=6,8,9
    def h(a,b=8,c):
        print(a,b,c,end="")
    
    h(1,5,2)
    print(a,b,c)
    
except: print('error')
