try:
    
    a,b,c=8,7,6
    def h(a,b=9,c):
        print(a,b,c,end="")
    
    h(2,c=1,b=5)
    print(a,b,c)
    
except: print('error')
