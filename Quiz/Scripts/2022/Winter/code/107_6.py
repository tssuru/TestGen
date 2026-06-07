try:
    a,b,c=5,8,0
    def h(b):
        a=1
        b-=4
        c=2
        return a+b+c
    
    a,b,c=2,4,9
    print(h(a),a,b,c)
    
except: print('error')
