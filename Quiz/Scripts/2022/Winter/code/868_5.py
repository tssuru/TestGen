try:
    
    a,b,c=7,9,6
    def h(a,b=8,c):
        print(a,b,c,end="")
    
    h(a=1,4,a=0)
    print(a,b,c)
    
except: print('error')
