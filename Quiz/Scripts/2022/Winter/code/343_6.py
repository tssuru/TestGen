try:
    a,b,c=2,1,6
    def h(b):
        a=1
        b-=2
        c=2
        return a+b+c
    
    a,b,c=3,2,9
    print(h(a),a,b,c)
    
except: print('error')
